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

#ifndef ALIBABACLOUD_VIDEOENHAN_MODEL_ERASEVIDEOSUBTITLESREQUEST_H_
#define ALIBABACLOUD_VIDEOENHAN_MODEL_ERASEVIDEOSUBTITLESREQUEST_H_

#include <alibabacloud/videoenhan/VideoenhanExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Videoenhan {
namespace Model {
class ALIBABACLOUD_VIDEOENHAN_EXPORT EraseVideoSubtitlesRequest : public RpcServiceRequest {
public:
	EraseVideoSubtitlesRequest();
	~EraseVideoSubtitlesRequest();
	float getBH() const;
	void setBH(float bH);
	float getBW() const;
	void setBW(float bW);
	float getBX() const;
	void setBX(float bX);
	float getBY() const;
	void setBY(float bY);
	bool getAsync() const;
	void setAsync(bool async);
	std::string getVideoUrl() const;
	void setVideoUrl(const std::string &videoUrl);

private:
	float bH_;
	float bW_;
	float bX_;
	float bY_;
	bool async_;
	std::string videoUrl_;
};
} // namespace Model
} // namespace Videoenhan
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VIDEOENHAN_MODEL_ERASEVIDEOSUBTITLESREQUEST_H_
