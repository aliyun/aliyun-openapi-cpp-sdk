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

#ifndef ALIBABACLOUD_AIPODCAST_MODEL_PODCASTTASKSUBMITREQUEST_H_
#define ALIBABACLOUD_AIPODCAST_MODEL_PODCASTTASKSUBMITREQUEST_H_

#include <alibabacloud/aipodcast/AIPodcastExport.h>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace AIPodcast {
namespace Model {
class ALIBABACLOUD_AIPODCAST_EXPORT PodcastTaskSubmitRequest : public RoaServiceRequest {
public:
	PodcastTaskSubmitRequest();
	~PodcastTaskSubmitRequest();
	std::string getAtmosphere() const;
	void setAtmosphere(const std::string &atmosphere);
	std::string getSourceLang() const;
	void setSourceLang(const std::string &sourceLang);
	int getCounts() const;
	void setCounts(int counts);
	std::vector<std::string> getFileUrls() const;
	void setFileUrls(const std::vector<std::string> &fileUrls);
	std::string getText() const;
	void setText(const std::string &text);
	std::vector<std::string> getVoices() const;
	void setVoices(const std::vector<std::string> &voices);
	std::string getAppId() const;
	void setAppId(const std::string &appId);
	std::string getTopic() const;
	void setTopic(const std::string &topic);
	std::string getStyle() const;
	void setStyle(const std::string &style);
	std::string getWorkspaceId() const;
	void setWorkspaceId(const std::string &workspaceId);

private:
	std::string atmosphere_;
	std::string sourceLang_;
	int counts_;
	std::vector<std::string> fileUrls_;
	std::string text_;
	std::vector<std::string> voices_;
	std::string appId_;
	std::string topic_;
	std::string style_;
	std::string workspaceId_;
};
} // namespace Model
} // namespace AIPodcast
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_AIPODCAST_MODEL_PODCASTTASKSUBMITREQUEST_H_
