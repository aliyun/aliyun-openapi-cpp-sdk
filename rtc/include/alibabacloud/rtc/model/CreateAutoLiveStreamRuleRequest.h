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

#ifndef ALIBABACLOUD_RTC_MODEL_CREATEAUTOLIVESTREAMRULEREQUEST_H_
#define ALIBABACLOUD_RTC_MODEL_CREATEAUTOLIVESTREAMRULEREQUEST_H_

#include <alibabacloud/rtc/RtcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Rtc {
namespace Model {
class ALIBABACLOUD_RTC_EXPORT CreateAutoLiveStreamRuleRequest : public RpcServiceRequest {
public:
	CreateAutoLiveStreamRuleRequest();
	~CreateAutoLiveStreamRuleRequest();
	std::string getRuleName() const;
	void setRuleName(const std::string &ruleName);
	std::vector<std::string> getChannelIdPrefixes() const;
	void setChannelIdPrefixes(const std::vector<std::string> &channelIdPrefixes);
	std::string getShowLog() const;
	void setShowLog(const std::string &showLog);
	std::string getPlayDomain() const;
	void setPlayDomain(const std::string &playDomain);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getAppId() const;
	void setAppId(const std::string &appId);
	std::string getCallBack() const;
	void setCallBack(const std::string &callBack);
	int getMediaEncode() const;
	void setMediaEncode(int mediaEncode);
	std::vector<std::string> getChannelIds() const;
	void setChannelIds(const std::vector<std::string> &channelIds);

private:
	std::string ruleName_;
	std::vector<std::string> channelIdPrefixes_;
	std::string showLog_;
	std::string playDomain_;
	long ownerId_;
	std::string appId_;
	std::string callBack_;
	int mediaEncode_;
	std::vector<std::string> channelIds_;
};
} // namespace Model
} // namespace Rtc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RTC_MODEL_CREATEAUTOLIVESTREAMRULEREQUEST_H_
