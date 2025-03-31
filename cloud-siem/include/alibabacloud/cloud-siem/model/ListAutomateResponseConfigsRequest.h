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

#ifndef ALIBABACLOUD_CLOUD_SIEM_MODEL_LISTAUTOMATERESPONSECONFIGSREQUEST_H_
#define ALIBABACLOUD_CLOUD_SIEM_MODEL_LISTAUTOMATERESPONSECONFIGSREQUEST_H_

#include <alibabacloud/cloud-siem/Cloud_siemExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cloud_siem {
namespace Model {
class ALIBABACLOUD_CLOUD_SIEM_EXPORT ListAutomateResponseConfigsRequest : public RpcServiceRequest {
public:
	ListAutomateResponseConfigsRequest();
	~ListAutomateResponseConfigsRequest();
	std::string getActionType() const;
	void setActionType(const std::string &actionType);
	long getRoleFor() const;
	void setRoleFor(long roleFor);
	std::string getRuleName() const;
	void setRuleName(const std::string &ruleName);
	long getSubUserId() const;
	void setSubUserId(long subUserId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getAutoResponseType() const;
	void setAutoResponseType(const std::string &autoResponseType);
	int getRoleType() const;
	void setRoleType(int roleType);
	long getId() const;
	void setId(long id);
	int getCurrentPage() const;
	void setCurrentPage(int currentPage);
	std::string getPlaybookUuid() const;
	void setPlaybookUuid(const std::string &playbookUuid);
	int getStatus() const;
	void setStatus(int status);

private:
	std::string actionType_;
	long roleFor_;
	std::string ruleName_;
	long subUserId_;
	std::string regionId_;
	int pageSize_;
	std::string autoResponseType_;
	int roleType_;
	long id_;
	int currentPage_;
	std::string playbookUuid_;
	int status_;
};
} // namespace Model
} // namespace Cloud_siem
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CLOUD_SIEM_MODEL_LISTAUTOMATERESPONSECONFIGSREQUEST_H_
