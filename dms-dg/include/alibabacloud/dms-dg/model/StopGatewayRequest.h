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

#ifndef ALIBABACLOUD_DMS_DG_MODEL_STOPGATEWAYREQUEST_H_
#define ALIBABACLOUD_DMS_DG_MODEL_STOPGATEWAYREQUEST_H_

#include <alibabacloud/dms-dg/Dms_dgExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dms_dg {
namespace Model {
class ALIBABACLOUD_DMS_DG_EXPORT StopGatewayRequest : public RpcServiceRequest {
public:
	StopGatewayRequest();
	~StopGatewayRequest();
	std::string getGatewayInstanceId() const;
	void setGatewayInstanceId(const std::string &gatewayInstanceId);
	std::string getGatewayId() const;
	void setGatewayId(const std::string &gatewayId);

private:
	std::string gatewayInstanceId_;
	std::string gatewayId_;
};
} // namespace Model
} // namespace Dms_dg
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DMS_DG_MODEL_STOPGATEWAYREQUEST_H_
