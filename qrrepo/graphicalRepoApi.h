#pragma once

#include "../qrkernel/roles.h"
#include "commonRepoApi.h"

namespace qrRepo {

class GraphicalRepoApi : public CommonRepoApi
{
public:
	virtual ~GraphicalRepoApi(){}

	virtual qReal::Id copy(qReal::Id const &src) = 0;

	virtual void addChild(qReal::Id const &id, qReal::Id const &logicalId, qReal::Id const &child) = 0;

	virtual double fromPort(qReal::Id const &id) const = 0;
	virtual void setFromPort(qReal::Id const &id, double fromPort) = 0;

	virtual double toPort(qReal::Id const &id) const = 0;
	virtual void setToPort(qReal::Id const &id, double toPort) = 0;

	virtual QVariant position(qReal::Id const &id) const = 0;
	virtual QVariant configuration(qReal::Id const &id) const = 0;

	virtual void setPosition(qReal::Id const &id, QVariant const &position) = 0;
	virtual void setConfiguration(qReal::Id const &id, QVariant const &configuration) = 0;

	virtual qReal::IdList graphicalElements(qReal::Id const &type) const = 0;

	virtual bool isGraphicalElement(qReal::Id const &id) const = 0;
	virtual qReal::Id logicalId(qReal::Id const &id) const = 0;

	virtual qReal::IdList temporaryRemovedLinksAt(qReal::Id const &id, QString const &direction) const = 0;
	virtual void setTemporaryRemovedLinks(qReal::Id const &id, qReal::IdList const &value, QString const &direction) = 0;
	virtual void removeTemporaryRemovedLinks(qReal::Id const &id) = 0;

	virtual void copyProperties(const qReal::Id &dest, const qReal::Id &src) = 0;
	virtual QMap<QString, QVariant> properties(qReal::Id const &id) = 0;
	virtual void setProperties(qReal::Id const &id, QMap<QString, QVariant> const &properties) = 0;
};

}
