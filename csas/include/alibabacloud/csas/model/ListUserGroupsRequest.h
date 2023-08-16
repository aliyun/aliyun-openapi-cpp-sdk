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

#ifndef ALIBABACLOUD_CSAS_MODEL_LISTUSERGROUPSREQUEST_H_
#define ALIBABACLOUD_CSAS_MODEL_LISTUSERGROUPSREQUEST_H_

#include <alibabacloud/csas/CsasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Csas {
namespace Model {
class ALIBABACLOUD_CSAS_EXPORT ListUserGroupsRequest : public RpcServiceRequest {
public:
	ListUserGroupsRequest();
	~ListUserGroupsRequest();
	std::string getAttributeValue() const;
	void setAttributeValue(const std::string &attributeValue);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	std::string getPAPolicyId() const;
	void setPAPolicyId(const std::string &pAPolicyId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	int getCurrentPage() const;
	void setCurrentPage(int currentPage);
	std::vector<std::string> getUserGroupIds() const;
	void setUserGroupIds(const std::vector<std::string> &userGroupIds);
	std::string getName() const;
	void setName(const std::string &name);

private:
	std::string attributeValue_;
	std::string sourceIp_;
	std::string pAPolicyId_;
	int pageSize_;
	int currentPage_;
	std::vector<std::string> userGroupIds_;
	std::string name_;
};
} // namespace Model
} // namespace Csas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CSAS_MODEL_LISTUSERGROUPSREQUEST_H_
