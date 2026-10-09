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

#ifndef ALIBABACLOUD_AIREGISTRY_MODEL_LISTPROMPTSREQUEST_H_
#define ALIBABACLOUD_AIREGISTRY_MODEL_LISTPROMPTSREQUEST_H_

#include <alibabacloud/airegistry/AIRegistryExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace AIRegistry {
namespace Model {
class ALIBABACLOUD_AIREGISTRY_EXPORT ListPromptsRequest : public RpcServiceRequest {
public:
	ListPromptsRequest();
	~ListPromptsRequest();
	std::string getPromptKey() const;
	void setPromptKey(const std::string &promptKey);
	std::string getBizTags() const;
	void setBizTags(const std::string &bizTags);
	std::string getNamespaceId() const;
	void setNamespaceId(const std::string &namespaceId);
	int getPageNo() const;
	void setPageNo(int pageNo);
	std::string getSearch() const;
	void setSearch(const std::string &search);
	int getPageSize() const;
	void setPageSize(int pageSize);

private:
	std::string promptKey_;
	std::string bizTags_;
	std::string namespaceId_;
	int pageNo_;
	std::string search_;
	int pageSize_;
};
} // namespace Model
} // namespace AIRegistry
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_AIREGISTRY_MODEL_LISTPROMPTSREQUEST_H_
