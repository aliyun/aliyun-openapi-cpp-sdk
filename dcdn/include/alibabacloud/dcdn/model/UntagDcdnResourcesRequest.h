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

#ifndef ALIBABACLOUD_DCDN_MODEL_UNTAGDCDNRESOURCESREQUEST_H_
#define ALIBABACLOUD_DCDN_MODEL_UNTAGDCDNRESOURCESREQUEST_H_

#include <alibabacloud/dcdn/DcdnExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dcdn {
namespace Model {
class ALIBABACLOUD_DCDN_EXPORT UntagDcdnResourcesRequest : public RpcServiceRequest {
public:
	UntagDcdnResourcesRequest();
	~UntagDcdnResourcesRequest();
	bool getAll() const;
	void setAll(bool all);
	std::vector<std::string> getResourceId() const;
	void setResourceId(const std::vector<std::string> &resourceId);
	std::vector<std::string> getTagKey() const;
	void setTagKey(const std::vector<std::string> &tagKey);
	std::string getResourceType() const;
	void setResourceType(const std::string &resourceType);

private:
	bool all_;
	std::vector<std::string> resourceId_;
	std::vector<std::string> tagKey_;
	std::string resourceType_;
};
} // namespace Model
} // namespace Dcdn
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DCDN_MODEL_UNTAGDCDNRESOURCESREQUEST_H_
