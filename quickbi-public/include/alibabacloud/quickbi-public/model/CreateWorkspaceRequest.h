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

#ifndef ALIBABACLOUD_QUICKBI_PUBLIC_MODEL_CREATEWORKSPACEREQUEST_H_
#define ALIBABACLOUD_QUICKBI_PUBLIC_MODEL_CREATEWORKSPACEREQUEST_H_

#include <alibabacloud/quickbi-public/Quickbi_publicExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Quickbi_public {
namespace Model {
class ALIBABACLOUD_QUICKBI_PUBLIC_EXPORT CreateWorkspaceRequest : public RpcServiceRequest {
public:
	CreateWorkspaceRequest();
	~CreateWorkspaceRequest();
	bool getAllowViewAll() const;
	void setAllowViewAll(bool allowViewAll);
	std::string getAccessPoint() const;
	void setAccessPoint(const std::string &accessPoint);
	std::string getWorkspaceName() const;
	void setWorkspaceName(const std::string &workspaceName);
	std::string getWorkspaceDescription() const;
	void setWorkspaceDescription(const std::string &workspaceDescription);
	bool getOnlyAdminCreateDatasource() const;
	void setOnlyAdminCreateDatasource(bool onlyAdminCreateDatasource);
	std::string getSignType() const;
	void setSignType(const std::string &signType);
	bool getAllowShare() const;
	void setAllowShare(bool allowShare);
	bool getDefaultShareToAll() const;
	void setDefaultShareToAll(bool defaultShareToAll);
	bool getAllowPublish() const;
	void setAllowPublish(bool allowPublish);
	bool getUseComment() const;
	void setUseComment(bool useComment);

private:
	bool allowViewAll_;
	std::string accessPoint_;
	std::string workspaceName_;
	std::string workspaceDescription_;
	bool onlyAdminCreateDatasource_;
	std::string signType_;
	bool allowShare_;
	bool defaultShareToAll_;
	bool allowPublish_;
	bool useComment_;
};
} // namespace Model
} // namespace Quickbi_public
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_QUICKBI_PUBLIC_MODEL_CREATEWORKSPACEREQUEST_H_
