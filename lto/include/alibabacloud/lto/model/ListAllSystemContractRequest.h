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

#ifndef ALIBABACLOUD_LTO_MODEL_LISTALLSYSTEMCONTRACTREQUEST_H_
#define ALIBABACLOUD_LTO_MODEL_LISTALLSYSTEMCONTRACTREQUEST_H_

#include <alibabacloud/lto/LtoExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Lto {
namespace Model {
class ALIBABACLOUD_LTO_EXPORT ListAllSystemContractRequest : public RpcServiceRequest {
public:
	ListAllSystemContractRequest();
	~ListAllSystemContractRequest();
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getBlockChainType() const;
	void setBlockChainType(const std::string &blockChainType);

private:
	std::string regionId_;
	std::string blockChainType_;
};
} // namespace Model
} // namespace Lto
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_LTO_MODEL_LISTALLSYSTEMCONTRACTREQUEST_H_
