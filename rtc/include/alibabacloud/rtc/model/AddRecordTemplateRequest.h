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

#ifndef ALIBABACLOUD_RTC_MODEL_ADDRECORDTEMPLATEREQUEST_H_
#define ALIBABACLOUD_RTC_MODEL_ADDRECORDTEMPLATEREQUEST_H_

#include <alibabacloud/rtc/RtcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Rtc {
namespace Model {
class ALIBABACLOUD_RTC_EXPORT AddRecordTemplateRequest : public RpcServiceRequest {
public:
	struct ClockWidgets {
		int fontType;
		int fontColor;
		float y;
		int zOrder;
		float x;
		int fontSize;
	};
	struct Watermarks {
		float alpha;
		float width;
		float height;
		float y;
		std::string url;
		int display;
		int zOrder;
		float x;
	};
	struct Backgrounds {
		float width;
		float height;
		float y;
		std::string url;
		int display;
		int zOrder;
		float x;
	};
	AddRecordTemplateRequest();
	~AddRecordTemplateRequest();
	std::vector<std::string> getFormats() const;
	void setFormats(const std::vector<std::string> &formats);
	std::string getOssFilePrefix() const;
	void setOssFilePrefix(const std::string &ossFilePrefix);
	int getBackgroundColor() const;
	void setBackgroundColor(int backgroundColor);
	std::string getTaskProfile() const;
	void setTaskProfile(const std::string &taskProfile);
	std::vector<long> getLayoutIds() const;
	void setLayoutIds(const std::vector<long> &layoutIds);
	std::vector<ClockWidgets> getClockWidgets() const;
	void setClockWidgets(const std::vector<ClockWidgets> &clockWidgets);
	std::string getShowLog() const;
	void setShowLog(const std::string &showLog);
	std::string getOssBucket() const;
	void setOssBucket(const std::string &ossBucket);
	int getDelayStopTime() const;
	void setDelayStopTime(int delayStopTime);
	int getFileSplitInterval() const;
	void setFileSplitInterval(int fileSplitInterval);
	std::string getMnsQueue() const;
	void setMnsQueue(const std::string &mnsQueue);
	std::string getHttpCallbackUrl() const;
	void setHttpCallbackUrl(const std::string &httpCallbackUrl);
	std::vector<Watermarks> getWatermarks() const;
	void setWatermarks(const std::vector<Watermarks> &watermarks);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	bool getEnableM3u8DateTime() const;
	void setEnableM3u8DateTime(bool enableM3u8DateTime);
	std::string getAppId() const;
	void setAppId(const std::string &appId);
	std::vector<Backgrounds> getBackgrounds() const;
	void setBackgrounds(const std::vector<Backgrounds> &backgrounds);
	std::string getName() const;
	void setName(const std::string &name);
	int getMediaEncode() const;
	void setMediaEncode(int mediaEncode);

private:
	std::vector<std::string> formats_;
	std::string ossFilePrefix_;
	int backgroundColor_;
	std::string taskProfile_;
	std::vector<long> layoutIds_;
	std::vector<ClockWidgets> clockWidgets_;
	std::string showLog_;
	std::string ossBucket_;
	int delayStopTime_;
	int fileSplitInterval_;
	std::string mnsQueue_;
	std::string httpCallbackUrl_;
	std::vector<Watermarks> watermarks_;
	long ownerId_;
	bool enableM3u8DateTime_;
	std::string appId_;
	std::vector<Backgrounds> backgrounds_;
	std::string name_;
	int mediaEncode_;
};
} // namespace Model
} // namespace Rtc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RTC_MODEL_ADDRECORDTEMPLATEREQUEST_H_
