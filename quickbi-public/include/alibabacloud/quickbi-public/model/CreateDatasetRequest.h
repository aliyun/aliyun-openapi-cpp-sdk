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

#ifndef ALIBABACLOUD_QUICKBI_PUBLIC_MODEL_CREATEDATASETREQUEST_H_
#define ALIBABACLOUD_QUICKBI_PUBLIC_MODEL_CREATEDATASETREQUEST_H_

#include <alibabacloud/quickbi-public/Quickbi_publicExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Quickbi_public {
namespace Model {
class ALIBABACLOUD_QUICKBI_PUBLIC_EXPORT CreateDatasetRequest : public RpcServiceRequest {
public:
	CreateDatasetRequest();
	~CreateDatasetRequest();
	std::string getDsId() const;
	void setDsId(const std::string &dsId);
	std::string getAccessPoint() const;
	void setAccessPoint(const std::string &accessPoint);
	std::string getUserId() const;
	void setUserId(const std::string &userId);
	std::string getTableName() const;
	void setTableName(const std::string &tableName);
	std::string getTargetDirectoryId() const;
	void setTargetDirectoryId(const std::string &targetDirectoryId);
	std::string getSignType() const;
	void setSignType(const std::string &signType);
	std::string getUserDefineCubeName() const;
	void setUserDefineCubeName(const std::string &userDefineCubeName);
	std::string getWorkspaceId() const;
	void setWorkspaceId(const std::string &workspaceId);

private:
	std::string dsId_;
	std::string accessPoint_;
	std::string userId_;
	std::string tableName_;
	std::string targetDirectoryId_;
	std::string signType_;
	std::string userDefineCubeName_;
	std::string workspaceId_;
};
} // namespace Model
} // namespace Quickbi_public
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_QUICKBI_PUBLIC_MODEL_CREATEDATASETREQUEST_H_
