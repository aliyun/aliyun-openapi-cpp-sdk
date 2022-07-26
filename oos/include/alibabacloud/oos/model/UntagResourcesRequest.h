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

#ifndef ALIBABACLOUD_OOS_MODEL_UNTAGRESOURCESREQUEST_H_
#define ALIBABACLOUD_OOS_MODEL_UNTAGRESOURCESREQUEST_H_

#include <alibabacloud/oos/OosExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Oos {
namespace Model {
class ALIBABACLOUD_OOS_EXPORT UntagResourcesRequest : public RpcServiceRequest {
public:
	UntagResourcesRequest();
	~UntagResourcesRequest();
	bool getAll() const;
	void setAll(bool all);
	std::string getResourceType() const;
	void setResourceType(const std::string &resourceType);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::map<std::string, std::string> getTagKeys() const;
	void setTagKeys(std::map<std::string, std::string> tagKeys);
	std::map<std::string, std::string> getResourceIds() const;
	void setResourceIds(std::map<std::string, std::string> resourceIds);

private:
	bool all_;
	std::string resourceType_;
	std::string regionId_;
	std::map<std::string, std::string> tagKeys_;
	std::map<std::string, std::string> resourceIds_;
};
} // namespace Model
} // namespace Oos
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_OOS_MODEL_UNTAGRESOURCESREQUEST_H_
