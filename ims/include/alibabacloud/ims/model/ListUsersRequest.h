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

#ifndef ALIBABACLOUD_IMS_MODEL_LISTUSERSREQUEST_H_
#define ALIBABACLOUD_IMS_MODEL_LISTUSERSREQUEST_H_

#include <alibabacloud/ims/ImsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ims {
namespace Model {
class ALIBABACLOUD_IMS_EXPORT ListUsersRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string value;
		std::string key;
	};
	ListUsersRequest();
	~ListUsersRequest();
	std::string getAkProxySuffix() const;
	void setAkProxySuffix(const std::string &akProxySuffix);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	std::string getMarker() const;
	void setMarker(const std::string &marker);
	int getMaxItems() const;
	void setMaxItems(int maxItems);
	std::string getStatus() const;
	void setStatus(const std::string &status);

private:
	std::string akProxySuffix_;
	std::vector<Tag> tag_;
	std::string marker_;
	int maxItems_;
	std::string status_;
};
} // namespace Model
} // namespace Ims
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_IMS_MODEL_LISTUSERSREQUEST_H_
