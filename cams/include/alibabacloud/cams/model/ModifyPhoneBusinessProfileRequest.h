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

#ifndef ALIBABACLOUD_CAMS_MODEL_MODIFYPHONEBUSINESSPROFILEREQUEST_H_
#define ALIBABACLOUD_CAMS_MODEL_MODIFYPHONEBUSINESSPROFILEREQUEST_H_

#include <alibabacloud/cams/CamsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cams {
namespace Model {
class ALIBABACLOUD_CAMS_EXPORT ModifyPhoneBusinessProfileRequest : public RpcServiceRequest {
public:
	ModifyPhoneBusinessProfileRequest();
	~ModifyPhoneBusinessProfileRequest();
	std::string getPhoneNumber() const;
	void setPhoneNumber(const std::string &phoneNumber);
	std::string getAbout() const;
	void setAbout(const std::string &about);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getVertical() const;
	void setVertical(const std::string &vertical);
	std::string getApiCode() const;
	void setApiCode(const std::string &apiCode);
	std::string getEmail() const;
	void setEmail(const std::string &email);
	std::string getAddress() const;
	void setAddress(const std::string &address);
	std::string getProdCode() const;
	void setProdCode(const std::string &prodCode);
	std::string getProfilePictureUrl() const;
	void setProfilePictureUrl(const std::string &profilePictureUrl);
	std::string getCustSpaceId() const;
	void setCustSpaceId(const std::string &custSpaceId);
	std::vector<std::string> getWebsites() const;
	void setWebsites(const std::vector<std::string> &websites);

private:
	std::string phoneNumber_;
	std::string about_;
	std::string description_;
	std::string vertical_;
	std::string apiCode_;
	std::string email_;
	std::string address_;
	std::string prodCode_;
	std::string profilePictureUrl_;
	std::string custSpaceId_;
	std::vector<std::string> websites_;
};
} // namespace Model
} // namespace Cams
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CAMS_MODEL_MODIFYPHONEBUSINESSPROFILEREQUEST_H_
