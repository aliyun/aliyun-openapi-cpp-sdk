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

#ifndef ALIBABACLOUD_CMS_MODEL_PUTCONTACTREQUEST_H_
#define ALIBABACLOUD_CMS_MODEL_PUTCONTACTREQUEST_H_

#include <alibabacloud/cms/CmsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cms {
namespace Model {
class ALIBABACLOUD_CMS_EXPORT PutContactRequest : public RpcServiceRequest {
public:
	PutContactRequest();
	~PutContactRequest();
	std::string getChannelsDingWebHook() const;
	void setChannelsDingWebHook(const std::string &channelsDingWebHook);
	std::string getContactName() const;
	void setContactName(const std::string &contactName);
	std::string getChannelsMail() const;
	void setChannelsMail(const std::string &channelsMail);
	std::string getChannelsAliIM() const;
	void setChannelsAliIM(const std::string &channelsAliIM);
	std::string getDescribe() const;
	void setDescribe(const std::string &describe);
	std::string getLang() const;
	void setLang(const std::string &lang);
	std::string getChannelsSMS() const;
	void setChannelsSMS(const std::string &channelsSMS);

private:
	std::string channelsDingWebHook_;
	std::string contactName_;
	std::string channelsMail_;
	std::string channelsAliIM_;
	std::string describe_;
	std::string lang_;
	std::string channelsSMS_;
};
} // namespace Model
} // namespace Cms
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CMS_MODEL_PUTCONTACTREQUEST_H_
