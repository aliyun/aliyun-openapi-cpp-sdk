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

#ifndef ALIBABACLOUD_VOD_MODEL_REFRESHMEDIAPLAYURLSREQUEST_H_
#define ALIBABACLOUD_VOD_MODEL_REFRESHMEDIAPLAYURLSREQUEST_H_

#include <alibabacloud/vod/VodExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vod {
namespace Model {
class ALIBABACLOUD_VOD_EXPORT RefreshMediaPlayUrlsRequest : public RpcServiceRequest {
public:
	RefreshMediaPlayUrlsRequest();
	~RefreshMediaPlayUrlsRequest();
	std::string getFormats() const;
	void setFormats(const std::string &formats);
	std::string getUserData() const;
	void setUserData(const std::string &userData);
	std::string getMediaIds() const;
	void setMediaIds(const std::string &mediaIds);
	std::string getDefinitions() const;
	void setDefinitions(const std::string &definitions);
	std::string getStreamType() const;
	void setStreamType(const std::string &streamType);
	std::string getTaskType() const;
	void setTaskType(const std::string &taskType);
	bool getSliceFlag() const;
	void setSliceFlag(bool sliceFlag);
	std::string getResultType() const;
	void setResultType(const std::string &resultType);
	int getSliceCount() const;
	void setSliceCount(int sliceCount);

private:
	std::string formats_;
	std::string userData_;
	std::string mediaIds_;
	std::string definitions_;
	std::string streamType_;
	std::string taskType_;
	bool sliceFlag_;
	std::string resultType_;
	int sliceCount_;
};
} // namespace Model
} // namespace Vod
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VOD_MODEL_REFRESHMEDIAPLAYURLSREQUEST_H_
