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

#ifndef ALIBABACLOUD_CLOUD_SIEM_MODEL_LISTDISPOSESTRATEGYREQUEST_H_
#define ALIBABACLOUD_CLOUD_SIEM_MODEL_LISTDISPOSESTRATEGYREQUEST_H_

#include <alibabacloud/cloud-siem/Cloud_siemExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cloud_siem {
namespace Model {
class ALIBABACLOUD_CLOUD_SIEM_EXPORT ListDisposeStrategyRequest : public RpcServiceRequest {
public:
	ListDisposeStrategyRequest();
	~ListDisposeStrategyRequest();
	std::string getEntityIdentity() const;
	void setEntityIdentity(const std::string &entityIdentity);
	std::string getPlaybookName() const;
	void setPlaybookName(const std::string &playbookName);
	std::string getPlaybookTypes() const;
	void setPlaybookTypes(const std::string &playbookTypes);
	long getStartTime() const;
	void setStartTime(long startTime);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getOrderField() const;
	void setOrderField(const std::string &orderField);
	std::string getOrder() const;
	void setOrder(const std::string &order);
	std::string getSophonTaskId() const;
	void setSophonTaskId(const std::string &sophonTaskId);
	int getEffectiveStatus() const;
	void setEffectiveStatus(int effectiveStatus);
	long getEndTime() const;
	void setEndTime(long endTime);
	int getCurrentPage() const;
	void setCurrentPage(int currentPage);
	std::string getPlaybookUuid() const;
	void setPlaybookUuid(const std::string &playbookUuid);
	std::string getEntityType() const;
	void setEntityType(const std::string &entityType);

private:
	std::string entityIdentity_;
	std::string playbookName_;
	std::string playbookTypes_;
	long startTime_;
	std::string regionId_;
	int pageSize_;
	std::string orderField_;
	std::string order_;
	std::string sophonTaskId_;
	int effectiveStatus_;
	long endTime_;
	int currentPage_;
	std::string playbookUuid_;
	std::string entityType_;
};
} // namespace Model
} // namespace Cloud_siem
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CLOUD_SIEM_MODEL_LISTDISPOSESTRATEGYREQUEST_H_
