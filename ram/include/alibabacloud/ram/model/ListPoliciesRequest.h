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

#ifndef ALIBABACLOUD_RAM_MODEL_LISTPOLICIESREQUEST_H_
#define ALIBABACLOUD_RAM_MODEL_LISTPOLICIESREQUEST_H_

#include <alibabacloud/ram/RamExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ram {
namespace Model {
class ALIBABACLOUD_RAM_EXPORT ListPoliciesRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string value;
		std::string key;
	};
	ListPoliciesRequest();
	~ListPoliciesRequest();
	std::string getLanguage() const;
	void setLanguage(const std::string &language);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	std::string getPolicyType() const;
	void setPolicyType(const std::string &policyType);
	std::string getMarker() const;
	void setMarker(const std::string &marker);
	int getMaxItems() const;
	void setMaxItems(int maxItems);

private:
	std::string language_;
	std::vector<Tag> tag_;
	std::string policyType_;
	std::string marker_;
	int maxItems_;
};
} // namespace Model
} // namespace Ram
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RAM_MODEL_LISTPOLICIESREQUEST_H_
