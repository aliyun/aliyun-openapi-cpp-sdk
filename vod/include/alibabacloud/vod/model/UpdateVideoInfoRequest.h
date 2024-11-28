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

#ifndef ALIBABACLOUD_VOD_MODEL_UPDATEVIDEOINFOREQUEST_H_
#define ALIBABACLOUD_VOD_MODEL_UPDATEVIDEOINFOREQUEST_H_

#include <alibabacloud/vod/VodExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vod {
namespace Model {
class ALIBABACLOUD_VOD_EXPORT UpdateVideoInfoRequest : public RpcServiceRequest {
public:
	UpdateVideoInfoRequest();
	~UpdateVideoInfoRequest();
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getTitle() const;
	void setTitle(const std::string &title);
	std::string getCoverURL() const;
	void setCoverURL(const std::string &coverURL);
	std::string getUserData() const;
	void setUserData(const std::string &userData);
	std::string getDownloadSwitch() const;
	void setDownloadSwitch(const std::string &downloadSwitch);
	long getCateId() const;
	void setCateId(long cateId);
	std::string getCustomMediaInfo() const;
	void setCustomMediaInfo(const std::string &customMediaInfo);
	std::string getVideoId() const;
	void setVideoId(const std::string &videoId);
	std::string getTags() const;
	void setTags(const std::string &tags);
	std::string getStatus() const;
	void setStatus(const std::string &status);

private:
	std::string description_;
	std::string title_;
	std::string coverURL_;
	std::string userData_;
	std::string downloadSwitch_;
	long cateId_;
	std::string customMediaInfo_;
	std::string videoId_;
	std::string tags_;
	std::string status_;
};
} // namespace Model
} // namespace Vod
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VOD_MODEL_UPDATEVIDEOINFOREQUEST_H_
