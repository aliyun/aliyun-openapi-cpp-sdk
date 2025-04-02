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

#ifndef ALIBABACLOUD_RESOURCECENTER_MODEL_LISTRESOURCETYPESREQUEST_H_
#define ALIBABACLOUD_RESOURCECENTER_MODEL_LISTRESOURCETYPESREQUEST_H_

#include <alibabacloud/resourcecenter/ResourceCenterExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ResourceCenter {
namespace Model {
class ALIBABACLOUD_RESOURCECENTER_EXPORT ListResourceTypesRequest : public RpcServiceRequest {
public:
	ListResourceTypesRequest();
	~ListResourceTypesRequest();
	std::string getScene() const;
	void setScene(const std::string &scene);
	std::vector<std::string> getQuery() const;
	void setQuery(const std::vector<std::string> &query);
	std::string getResourceType() const;
	void setResourceType(const std::string &resourceType);
	std::string getAcceptLanguage() const;
	void setAcceptLanguage(const std::string &acceptLanguage);

private:
	std::string scene_;
	std::vector<std::string> query_;
	std::string resourceType_;
	std::string acceptLanguage_;
};
} // namespace Model
} // namespace ResourceCenter
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RESOURCECENTER_MODEL_LISTRESOURCETYPESREQUEST_H_
