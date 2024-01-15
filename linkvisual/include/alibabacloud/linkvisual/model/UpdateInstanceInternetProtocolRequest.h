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

#ifndef ALIBABACLOUD_LINKVISUAL_MODEL_UPDATEINSTANCEINTERNETPROTOCOLREQUEST_H_
#define ALIBABACLOUD_LINKVISUAL_MODEL_UPDATEINSTANCEINTERNETPROTOCOLREQUEST_H_

#include <alibabacloud/linkvisual/LinkvisualExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Linkvisual {
namespace Model {
class ALIBABACLOUD_LINKVISUAL_EXPORT UpdateInstanceInternetProtocolRequest : public RpcServiceRequest {
public:
	UpdateInstanceInternetProtocolRequest();
	~UpdateInstanceInternetProtocolRequest();
	std::string getIotInstanceId() const;
	void setIotInstanceId(const std::string &iotInstanceId);
	std::string getIpVersion() const;
	void setIpVersion(const std::string &ipVersion);
	std::string getApiProduct() const;
	void setApiProduct(const std::string &apiProduct);
	std::string getApiRevision() const;
	void setApiRevision(const std::string &apiRevision);

private:
	std::string iotInstanceId_;
	std::string ipVersion_;
	std::string apiProduct_;
	std::string apiRevision_;
};
} // namespace Model
} // namespace Linkvisual
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_LINKVISUAL_MODEL_UPDATEINSTANCEINTERNETPROTOCOLREQUEST_H_
