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

#ifndef ALIBABACLOUD_LINKVISUAL_MODEL_CREATEGBDEVICEREQUEST_H_
#define ALIBABACLOUD_LINKVISUAL_MODEL_CREATEGBDEVICEREQUEST_H_

#include <alibabacloud/linkvisual/LinkvisualExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Linkvisual {
namespace Model {
class ALIBABACLOUD_LINKVISUAL_EXPORT CreateGbDeviceRequest : public RpcServiceRequest {
public:
	CreateGbDeviceRequest();
	~CreateGbDeviceRequest();
	std::string getSubProductKey() const;
	void setSubProductKey(const std::string &subProductKey);
	std::string getGbId() const;
	void setGbId(const std::string &gbId);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	int getDeviceType() const;
	void setDeviceType(int deviceType);
	std::string getPassword() const;
	void setPassword(const std::string &password);
	std::string getIotInstanceId() const;
	void setIotInstanceId(const std::string &iotInstanceId);
	int getDeviceProtocol() const;
	void setDeviceProtocol(int deviceProtocol);
	std::string getProductKey() const;
	void setProductKey(const std::string &productKey);
	std::string getMediaNetProtocol() const;
	void setMediaNetProtocol(const std::string &mediaNetProtocol);
	std::string getApiProduct() const;
	void setApiProduct(const std::string &apiProduct);
	std::string getApiRevision() const;
	void setApiRevision(const std::string &apiRevision);

private:
	std::string subProductKey_;
	std::string gbId_;
	std::string description_;
	int deviceType_;
	std::string password_;
	std::string iotInstanceId_;
	int deviceProtocol_;
	std::string productKey_;
	std::string mediaNetProtocol_;
	std::string apiProduct_;
	std::string apiRevision_;
};
} // namespace Model
} // namespace Linkvisual
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_LINKVISUAL_MODEL_CREATEGBDEVICEREQUEST_H_
