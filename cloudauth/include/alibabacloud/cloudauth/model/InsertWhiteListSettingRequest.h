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

#ifndef ALIBABACLOUD_CLOUDAUTH_MODEL_INSERTWHITELISTSETTINGREQUEST_H_
#define ALIBABACLOUD_CLOUDAUTH_MODEL_INSERTWHITELISTSETTINGREQUEST_H_

#include <alibabacloud/cloudauth/CloudauthExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cloudauth {
namespace Model {
class ALIBABACLOUD_CLOUDAUTH_EXPORT InsertWhiteListSettingRequest : public RpcServiceRequest {
public:
	InsertWhiteListSettingRequest();
	~InsertWhiteListSettingRequest();
	int getValidDay() const;
	void setValidDay(int validDay);
	std::string getRemark() const;
	void setRemark(const std::string &remark);
	std::string getCertifyId() const;
	void setCertifyId(const std::string &certifyId);
	std::string getCertNo() const;
	void setCertNo(const std::string &certNo);
	std::string getServiceCode() const;
	void setServiceCode(const std::string &serviceCode);
	long getSceneId() const;
	void setSceneId(long sceneId);

private:
	int validDay_;
	std::string remark_;
	std::string certifyId_;
	std::string certNo_;
	std::string serviceCode_;
	long sceneId_;
};
} // namespace Model
} // namespace Cloudauth
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CLOUDAUTH_MODEL_INSERTWHITELISTSETTINGREQUEST_H_
