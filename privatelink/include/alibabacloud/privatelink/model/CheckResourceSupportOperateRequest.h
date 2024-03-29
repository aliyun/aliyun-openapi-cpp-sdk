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

#ifndef ALIBABACLOUD_PRIVATELINK_MODEL_CHECKRESOURCESUPPORTOPERATEREQUEST_H_
#define ALIBABACLOUD_PRIVATELINK_MODEL_CHECKRESOURCESUPPORTOPERATEREQUEST_H_

#include <alibabacloud/privatelink/PrivatelinkExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Privatelink {
namespace Model {
class ALIBABACLOUD_PRIVATELINK_EXPORT CheckResourceSupportOperateRequest : public RpcServiceRequest {
public:
	CheckResourceSupportOperateRequest();
	~CheckResourceSupportOperateRequest();
	std::string getResourceId() const;
	void setResourceId(const std::string &resourceId);
	std::string getZoneId() const;
	void setZoneId(const std::string &zoneId);
	std::string getResourceType() const;
	void setResourceType(const std::string &resourceType);

private:
	std::string resourceId_;
	std::string zoneId_;
	std::string resourceType_;
};
} // namespace Model
} // namespace Privatelink
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_PRIVATELINK_MODEL_CHECKRESOURCESUPPORTOPERATEREQUEST_H_
