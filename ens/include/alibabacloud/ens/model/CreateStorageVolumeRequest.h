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

#ifndef ALIBABACLOUD_ENS_MODEL_CREATESTORAGEVOLUMEREQUEST_H_
#define ALIBABACLOUD_ENS_MODEL_CREATESTORAGEVOLUMEREQUEST_H_

#include <alibabacloud/ens/EnsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ens {
namespace Model {
class ALIBABACLOUD_ENS_EXPORT CreateStorageVolumeRequest : public RpcServiceRequest {
public:
	CreateStorageVolumeRequest();
	~CreateStorageVolumeRequest();
	std::string getEnsRegionId() const;
	void setEnsRegionId(const std::string &ensRegionId);
	std::string getGatewayId() const;
	void setGatewayId(const std::string &gatewayId);
	std::string getAuthUser() const;
	void setAuthUser(const std::string &authUser);
	std::string getVolumeName() const;
	void setVolumeName(const std::string &volumeName);
	std::string getAuthPassword() const;
	void setAuthPassword(const std::string &authPassword);
	std::string getAuthProtocol() const;
	void setAuthProtocol(const std::string &authProtocol);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getIsEnable() const;
	void setIsEnable(const std::string &isEnable);
	std::string getIsAuth() const;
	void setIsAuth(const std::string &isAuth);
	std::string getStorageId() const;
	void setStorageId(const std::string &storageId);

private:
	std::string ensRegionId_;
	std::string gatewayId_;
	std::string authUser_;
	std::string volumeName_;
	std::string authPassword_;
	std::string authProtocol_;
	std::string description_;
	std::string isEnable_;
	std::string isAuth_;
	std::string storageId_;
};
} // namespace Model
} // namespace Ens
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ENS_MODEL_CREATESTORAGEVOLUMEREQUEST_H_
