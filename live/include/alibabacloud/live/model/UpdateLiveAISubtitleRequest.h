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

#ifndef ALIBABACLOUD_LIVE_MODEL_UPDATELIVEAISUBTITLEREQUEST_H_
#define ALIBABACLOUD_LIVE_MODEL_UPDATELIVEAISUBTITLEREQUEST_H_

#include <alibabacloud/live/LiveExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Live {
namespace Model {
class ALIBABACLOUD_LIVE_EXPORT UpdateLiveAISubtitleRequest : public RpcServiceRequest {
public:
	UpdateLiveAISubtitleRequest();
	~UpdateLiveAISubtitleRequest();
	std::string getSrcLanguage() const;
	void setSrcLanguage(const std::string &srcLanguage);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getFontName() const;
	void setFontName(const std::string &fontName);
	std::string getSubtitleName() const;
	void setSubtitleName(const std::string &subtitleName);
	float getFontSizeNormalized() const;
	void setFontSizeNormalized(float fontSizeNormalized);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getFontColor() const;
	void setFontColor(const std::string &fontColor);
	bool getShowSourceLan() const;
	void setShowSourceLan(bool showSourceLan);
	std::vector<float> getPositionNormalized() const;
	void setPositionNormalized(const std::vector<float> &positionNormalized);
	float getBorderWidthNormalized() const;
	void setBorderWidthNormalized(float borderWidthNormalized);
	int getMaxLines() const;
	void setMaxLines(int maxLines);
	std::string getHeight() const;
	void setHeight(const std::string &height);
	int getWordPerLine() const;
	void setWordPerLine(int wordPerLine);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	float getBgWidthNormalized() const;
	void setBgWidthNormalized(float bgWidthNormalized);
	std::string getBgColor() const;
	void setBgColor(const std::string &bgColor);
	std::string getDstLanguage() const;
	void setDstLanguage(const std::string &dstLanguage);
	std::string getWidth() const;
	void setWidth(const std::string &width);
	std::string getSubtitleId() const;
	void setSubtitleId(const std::string &subtitleId);

private:
	std::string srcLanguage_;
	std::string description_;
	std::string fontName_;
	std::string subtitleName_;
	float fontSizeNormalized_;
	std::string regionId_;
	std::string fontColor_;
	bool showSourceLan_;
	std::vector<float> positionNormalized_;
	float borderWidthNormalized_;
	int maxLines_;
	std::string height_;
	int wordPerLine_;
	long ownerId_;
	float bgWidthNormalized_;
	std::string bgColor_;
	std::string dstLanguage_;
	std::string width_;
	std::string subtitleId_;
};
} // namespace Model
} // namespace Live
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_LIVE_MODEL_UPDATELIVEAISUBTITLEREQUEST_H_
