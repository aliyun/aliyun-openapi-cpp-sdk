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

#ifndef ALIBABACLOUD_ENS_MODEL_CREATEENSROUTEENTRYREQUEST_H_
#define ALIBABACLOUD_ENS_MODEL_CREATEENSROUTEENTRYREQUEST_H_

#include <alibabacloud/ens/EnsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ens {
namespace Model {
class ALIBABACLOUD_ENS_EXPORT CreateEnsRouteEntryRequest : public RpcServiceRequest {
public:
	CreateEnsRouteEntryRequest();
	~CreateEnsRouteEntryRequest();
	std::string getRouteEntryName() const;
	void setRouteEntryName(const std::string &routeEntryName);
	std::string getNextHopId() const;
	void setNextHopId(const std::string &nextHopId);
	std::string getNextHopType() const;
	void setNextHopType(const std::string &nextHopType);
	std::string getRouteTableId() const;
	void setRouteTableId(const std::string &routeTableId);
	std::string getDestinationCidrBlock() const;
	void setDestinationCidrBlock(const std::string &destinationCidrBlock);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getSourceCidrBlock() const;
	void setSourceCidrBlock(const std::string &sourceCidrBlock);

private:
	std::string routeEntryName_;
	std::string nextHopId_;
	std::string nextHopType_;
	std::string routeTableId_;
	std::string destinationCidrBlock_;
	std::string description_;
	std::string sourceCidrBlock_;
};
} // namespace Model
} // namespace Ens
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ENS_MODEL_CREATEENSROUTEENTRYREQUEST_H_
