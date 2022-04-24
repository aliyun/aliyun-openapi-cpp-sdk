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

#ifndef ALIBABACLOUD_BSSOPENAPI_MODEL_MODIFYCOSTUNITREQUEST_H_
#define ALIBABACLOUD_BSSOPENAPI_MODEL_MODIFYCOSTUNITREQUEST_H_

#include <alibabacloud/bssopenapi/BssOpenApiExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace BssOpenApi {
namespace Model {
class ALIBABACLOUD_BSSOPENAPI_EXPORT ModifyCostUnitRequest : public RpcServiceRequest {
public:
	struct UnitEntityList {
		std::string newUnitName;
		long unitId;
		long ownerUid;
	};
	ModifyCostUnitRequest();
	~ModifyCostUnitRequest();
	std::vector<UnitEntityList> getUnitEntityList() const;
	void setUnitEntityList(const std::vector<UnitEntityList> &unitEntityList);

private:
	std::vector<UnitEntityList> unitEntityList_;
};
} // namespace Model
} // namespace BssOpenApi
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_BSSOPENAPI_MODEL_MODIFYCOSTUNITREQUEST_H_
