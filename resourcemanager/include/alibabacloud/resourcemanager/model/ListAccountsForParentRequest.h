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

#ifndef ALIBABACLOUD_RESOURCEMANAGER_MODEL_LISTACCOUNTSFORPARENTREQUEST_H_
#define ALIBABACLOUD_RESOURCEMANAGER_MODEL_LISTACCOUNTSFORPARENTREQUEST_H_

#include <alibabacloud/resourcemanager/ResourceManagerExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ResourceManager {
namespace Model {
class ALIBABACLOUD_RESOURCEMANAGER_EXPORT ListAccountsForParentRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string value;
		std::string key;
	};
	ListAccountsForParentRequest();
	~ListAccountsForParentRequest();
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	std::string getQueryKeyword() const;
	void setQueryKeyword(const std::string &queryKeyword);
	std::string getParentFolderId() const;
	void setParentFolderId(const std::string &parentFolderId);
	bool getIncludeTags() const;
	void setIncludeTags(bool includeTags);

private:
	int pageNumber_;
	int pageSize_;
	std::vector<Tag> tag_;
	std::string queryKeyword_;
	std::string parentFolderId_;
	bool includeTags_;
};
} // namespace Model
} // namespace ResourceManager
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RESOURCEMANAGER_MODEL_LISTACCOUNTSFORPARENTREQUEST_H_
