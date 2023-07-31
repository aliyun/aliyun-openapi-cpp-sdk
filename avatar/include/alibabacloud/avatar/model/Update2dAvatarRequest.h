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

#ifndef ALIBABACLOUD_AVATAR_MODEL_UPDATE2DAVATARREQUEST_H_
#define ALIBABACLOUD_AVATAR_MODEL_UPDATE2DAVATARREQUEST_H_

#include <alibabacloud/avatar/AvatarExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Avatar {
namespace Model {
class ALIBABACLOUD_AVATAR_EXPORT Update2dAvatarRequest : public RpcServiceRequest {
public:
	Update2dAvatarRequest();
	~Update2dAvatarRequest();
	std::string getImage() const;
	void setImage(const std::string &image);
	int getOrientation() const;
	void setOrientation(int orientation);
	std::string getCode() const;
	void setCode(const std::string &code);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getVideo() const;
	void setVideo(const std::string &video);
	std::string getPortrait() const;
	void setPortrait(const std::string &portrait);
	std::string getExtParams() const;
	void setExtParams(const std::string &extParams);
	bool getTransparent() const;
	void setTransparent(bool transparent);
	std::string getCallbackParams() const;
	void setCallbackParams(const std::string &callbackParams);
	long getTenantId() const;
	void setTenantId(long tenantId);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getExtParams_CLS() const;
	void setExtParams_CLS(const std::string &extParams_CLS);
	bool getCallback() const;
	void setCallback(bool callback);
	std::string getCallbackParams_CLS() const;
	void setCallbackParams_CLS(const std::string &callbackParams_CLS);

private:
	std::string image_;
	int orientation_;
	std::string code_;
	std::string description_;
	std::string video_;
	std::string portrait_;
	std::string extParams_;
	bool transparent_;
	std::string callbackParams_;
	long tenantId_;
	std::string name_;
	std::string extParams_CLS_;
	bool callback_;
	std::string callbackParams_CLS_;
};
} // namespace Model
} // namespace Avatar
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_AVATAR_MODEL_UPDATE2DAVATARREQUEST_H_
