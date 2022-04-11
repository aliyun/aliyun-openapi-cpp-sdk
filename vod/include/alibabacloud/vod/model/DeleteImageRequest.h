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

#ifndef ALIBABACLOUD_VOD_MODEL_DELETEIMAGEREQUEST_H_
#define ALIBABACLOUD_VOD_MODEL_DELETEIMAGEREQUEST_H_

#include <alibabacloud/vod/VodExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vod {
namespace Model {
class ALIBABACLOUD_VOD_EXPORT DeleteImageRequest : public RpcServiceRequest {
public:
	DeleteImageRequest();
	~DeleteImageRequest();
	std::string getImageURLs() const;
	void setImageURLs(const std::string &imageURLs);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getImageType() const;
	void setImageType(const std::string &imageType);
	std::string getVideoId() const;
	void setVideoId(const std::string &videoId);
	std::string getDeleteImageType() const;
	void setDeleteImageType(const std::string &deleteImageType);
	std::string getImageIds() const;
	void setImageIds(const std::string &imageIds);

private:
	std::string imageURLs_;
	std::string accessKeyId_;
	std::string imageType_;
	std::string videoId_;
	std::string deleteImageType_;
	std::string imageIds_;
};
} // namespace Model
} // namespace Vod
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VOD_MODEL_DELETEIMAGEREQUEST_H_
