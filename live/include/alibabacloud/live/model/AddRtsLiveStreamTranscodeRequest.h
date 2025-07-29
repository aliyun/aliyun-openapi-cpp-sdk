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

#ifndef ALIBABACLOUD_LIVE_MODEL_ADDRTSLIVESTREAMTRANSCODEREQUEST_H_
#define ALIBABACLOUD_LIVE_MODEL_ADDRTSLIVESTREAMTRANSCODEREQUEST_H_

#include <alibabacloud/live/LiveExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Live {
namespace Model {
class ALIBABACLOUD_LIVE_EXPORT AddRtsLiveStreamTranscodeRequest : public RpcServiceRequest {
public:
	AddRtsLiveStreamTranscodeRequest();
	~AddRtsLiveStreamTranscodeRequest();
	std::string get_Template() const;
	void set_Template(const std::string &_template);
	bool getDeleteBframes() const;
	void setDeleteBframes(bool deleteBframes);
	std::string getLazy() const;
	void setLazy(const std::string &lazy);
	std::string getGop() const;
	void setGop(const std::string &gop);
	bool getOpus() const;
	void setOpus(bool opus);
	std::string getAudioCodec() const;
	void setAudioCodec(const std::string &audioCodec);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getTemplateType() const;
	void setTemplateType(const std::string &templateType);
	std::string getAudioProfile() const;
	void setAudioProfile(const std::string &audioProfile);
	int getHeight() const;
	void setHeight(int height);
	std::string getApp() const;
	void setApp(const std::string &app);
	int getAudioChannelNum() const;
	void setAudioChannelNum(int audioChannelNum);
	int getProfile() const;
	void setProfile(int profile);
	int getFPS() const;
	void setFPS(int fPS);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	int getAudioRate() const;
	void setAudioRate(int audioRate);
	int getAudioBitrate() const;
	void setAudioBitrate(int audioBitrate);
	std::string getDomain() const;
	void setDomain(const std::string &domain);
	int getWidth() const;
	void setWidth(int width);
	int getVideoBitrate() const;
	void setVideoBitrate(int videoBitrate);

private:
	std::string _template_;
	bool deleteBframes_;
	std::string lazy_;
	std::string gop_;
	bool opus_;
	std::string audioCodec_;
	std::string regionId_;
	std::string templateType_;
	std::string audioProfile_;
	int height_;
	std::string app_;
	int audioChannelNum_;
	int profile_;
	int fPS_;
	long ownerId_;
	int audioRate_;
	int audioBitrate_;
	std::string domain_;
	int width_;
	int videoBitrate_;
};
} // namespace Model
} // namespace Live
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_LIVE_MODEL_ADDRTSLIVESTREAMTRANSCODEREQUEST_H_
