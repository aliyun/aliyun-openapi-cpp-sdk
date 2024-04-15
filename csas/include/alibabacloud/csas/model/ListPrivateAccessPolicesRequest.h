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

#ifndef ALIBABACLOUD_CSAS_MODEL_LISTPRIVATEACCESSPOLICESREQUEST_H_
#define ALIBABACLOUD_CSAS_MODEL_LISTPRIVATEACCESSPOLICESREQUEST_H_

#include <alibabacloud/csas/CsasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Csas {
namespace Model {
class ALIBABACLOUD_CSAS_EXPORT ListPrivateAccessPolicesRequest : public RpcServiceRequest {
public:
	ListPrivateAccessPolicesRequest();
	~ListPrivateAccessPolicesRequest();
	std::vector<std::string> getPolicyIds() const;
	void setPolicyIds(const std::vector<std::string> &policyIds);
	std::string getTagName() const;
	void setTagName(const std::string &tagName);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getApplicationId() const;
	void setApplicationId(const std::string &applicationId);
	std::string getTagId() const;
	void setTagId(const std::string &tagId);
	std::string getUserGroupId() const;
	void setUserGroupId(const std::string &userGroupId);
	int getCurrentPage() const;
	void setCurrentPage(int currentPage);
	std::string getPolicyAction() const;
	void setPolicyAction(const std::string &policyAction);
	std::string getApplicationName() const;
	void setApplicationName(const std::string &applicationName);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getStatus() const;
	void setStatus(const std::string &status);

private:
	std::vector<std::string> policyIds_;
	std::string tagName_;
	std::string sourceIp_;
	int pageSize_;
	std::string applicationId_;
	std::string tagId_;
	std::string userGroupId_;
	int currentPage_;
	std::string policyAction_;
	std::string applicationName_;
	std::string name_;
	std::string status_;
};
} // namespace Model
} // namespace Csas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CSAS_MODEL_LISTPRIVATEACCESSPOLICESREQUEST_H_
