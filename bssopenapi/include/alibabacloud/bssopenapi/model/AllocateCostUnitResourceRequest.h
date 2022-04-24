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

#ifndef ALIBABACLOUD_BSSOPENAPI_MODEL_ALLOCATECOSTUNITRESOURCEREQUEST_H_
#define ALIBABACLOUD_BSSOPENAPI_MODEL_ALLOCATECOSTUNITRESOURCEREQUEST_H_

#include <alibabacloud/bssopenapi/BssOpenApiExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace BssOpenApi {
namespace Model {
class ALIBABACLOUD_BSSOPENAPI_EXPORT AllocateCostUnitResourceRequest : public RpcServiceRequest {
public:
	struct ResourceInstanceList {
		std::string resourceId;
		std::string commodityCode;
		std::string apportionCode;
		long resourceUserId;
	};
	AllocateCostUnitResourceRequest();
	~AllocateCostUnitResourceRequest();
	std::vector<ResourceInstanceList> getResourceInstanceList() const;
	void setResourceInstanceList(const std::vector<ResourceInstanceList> &resourceInstanceList);
	long getFromUnitId() const;
	void setFromUnitId(long fromUnitId);
	long getToUnitId() const;
	void setToUnitId(long toUnitId);
	long getFromUnitUserId() const;
	void setFromUnitUserId(long fromUnitUserId);
	long getToUnitUserId() const;
	void setToUnitUserId(long toUnitUserId);

private:
	std::vector<ResourceInstanceList> resourceInstanceList_;
	long fromUnitId_;
	long toUnitId_;
	long fromUnitUserId_;
	long toUnitUserId_;
};
} // namespace Model
} // namespace BssOpenApi
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_BSSOPENAPI_MODEL_ALLOCATECOSTUNITRESOURCEREQUEST_H_
