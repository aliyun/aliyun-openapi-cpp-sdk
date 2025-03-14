/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ALIBABACLOUD_SOPHONSOAR_MODEL_DESCRIBEPROCESSTASKSREQUEST_H_
#define ALIBABACLOUD_SOPHONSOAR_MODEL_DESCRIBEPROCESSTASKSREQUEST_H_

#include <alibabacloud/sophonsoar/SophonsoarExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sophonsoar {
namespace Model {
class ALIBABACLOUD_SOPHONSOAR_EXPORT DescribeProcessTasksRequest : public RpcServiceRequest {
public:
	DescribeProcessTasksRequest();
	~DescribeProcessTasksRequest();
	std::string getEntityKey() const;
	void setEntityKey(const std::string &entityKey);
	std::string getRoleFor() const;
	void setRoleFor(const std::string &roleFor);
	std::string getEntityName() const;
	void setEntityName(const std::string &entityName);
	std::string getTaskName() const;
	void setTaskName(const std::string &taskName);
	std::string getYunCode() const;
	void setYunCode(const std::string &yunCode);
	std::string getSource() const;
	void setSource(const std::string &source);
	long getPageNumber() const;
	void setPageNumber(long pageNumber);
	std::string getTaskStatus() const;
	void setTaskStatus(const std::string &taskStatus);
	long getProcessRemoveEnd() const;
	void setProcessRemoveEnd(long processRemoveEnd);
	std::string getParamContent() const;
	void setParamContent(const std::string &paramContent);
	std::string getScope() const;
	void setScope(const std::string &scope);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getTriggerSource() const;
	void setTriggerSource(const std::string &triggerSource);
	long getProcessRemoveStart() const;
	void setProcessRemoveStart(long processRemoveStart);
	std::string getRoleType() const;
	void setRoleType(const std::string &roleType);
	std::string getLang() const;
	void setLang(const std::string &lang);
	std::string getTaskId() const;
	void setTaskId(const std::string &taskId);
	std::string getOrderField() const;
	void setOrderField(const std::string &orderField);
	std::string getDirection() const;
	void setDirection(const std::string &direction);
	std::string getSceneCode() const;
	void setSceneCode(const std::string &sceneCode);
	long getProcessActionStart() const;
	void setProcessActionStart(long processActionStart);
	long getProcessActionEnd() const;
	void setProcessActionEnd(long processActionEnd);
	std::string getProcessStrategyUuid() const;
	void setProcessStrategyUuid(const std::string &processStrategyUuid);
	std::string getEntityType() const;
	void setEntityType(const std::string &entityType);
	std::string getEntityUuid() const;
	void setEntityUuid(const std::string &entityUuid);
	std::string getEventUuid() const;
	void setEventUuid(const std::string &eventUuid);

private:
	std::string entityKey_;
	std::string roleFor_;
	std::string entityName_;
	std::string taskName_;
	std::string yunCode_;
	std::string source_;
	long pageNumber_;
	std::string taskStatus_;
	long processRemoveEnd_;
	std::string paramContent_;
	std::string scope_;
	int pageSize_;
	std::string triggerSource_;
	long processRemoveStart_;
	std::string roleType_;
	std::string lang_;
	std::string taskId_;
	std::string orderField_;
	std::string direction_;
	std::string sceneCode_;
	long processActionStart_;
	long processActionEnd_;
	std::string processStrategyUuid_;
	std::string entityType_;
	std::string entityUuid_;
	std::string eventUuid_;
};
} // namespace Model
} // namespace Sophonsoar
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SOPHONSOAR_MODEL_DESCRIBEPROCESSTASKSREQUEST_H_
