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

#ifndef ALIBABACLOUD_RTC_MODEL_CREATEMPULAYOUTREQUEST_H_
#define ALIBABACLOUD_RTC_MODEL_CREATEMPULAYOUTREQUEST_H_

#include <alibabacloud/rtc/RtcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Rtc {
namespace Model {
class ALIBABACLOUD_RTC_EXPORT CreateMPULayoutRequest : public RpcServiceRequest {
public:
	struct Panes {
		int majorPane;
		float width;
		float height;
		float y;
		int paneId;
		int zOrder;
		float x;
	};
	CreateMPULayoutRequest();
	~CreateMPULayoutRequest();
	std::vector<Panes> getPanes() const;
	void setPanes(const std::vector<Panes> &panes);
	std::string getShowLog() const;
	void setShowLog(const std::string &showLog);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getAppId() const;
	void setAppId(const std::string &appId);
	std::string getName() const;
	void setName(const std::string &name);
	int getAudioMixCount() const;
	void setAudioMixCount(int audioMixCount);

private:
	std::vector<Panes> panes_;
	std::string showLog_;
	long ownerId_;
	std::string appId_;
	std::string name_;
	int audioMixCount_;
};
} // namespace Model
} // namespace Rtc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RTC_MODEL_CREATEMPULAYOUTREQUEST_H_
