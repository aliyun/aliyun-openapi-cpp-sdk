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

#ifndef ALIBABACLOUD_OOS_MODEL_LISTSECRETPARAMETERSREQUEST_H_
#define ALIBABACLOUD_OOS_MODEL_LISTSECRETPARAMETERSREQUEST_H_

#include <alibabacloud/oos/OosExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Oos {
namespace Model {
class ALIBABACLOUD_OOS_EXPORT ListSecretParametersRequest : public RpcServiceRequest {
public:
	ListSecretParametersRequest();
	~ListSecretParametersRequest();
	bool getRecursive() const;
	void setRecursive(bool recursive);
	std::string getPath() const;
	void setPath(const std::string &path);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::string getSortOrder() const;
	void setSortOrder(const std::string &sortOrder);
	std::string getTags() const;
	void setTags(const std::string &tags);
	std::string getName() const;
	void setName(const std::string &name);
	int getMaxResults() const;
	void setMaxResults(int maxResults);
	std::string getSortField() const;
	void setSortField(const std::string &sortField);

private:
	bool recursive_;
	std::string path_;
	std::string resourceGroupId_;
	std::string regionId_;
	std::string nextToken_;
	std::string sortOrder_;
	std::string tags_;
	std::string name_;
	int maxResults_;
	std::string sortField_;
};
} // namespace Model
} // namespace Oos
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_OOS_MODEL_LISTSECRETPARAMETERSREQUEST_H_
