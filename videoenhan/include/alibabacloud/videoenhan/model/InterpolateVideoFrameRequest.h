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

#ifndef ALIBABACLOUD_VIDEOENHAN_MODEL_INTERPOLATEVIDEOFRAMEREQUEST_H_
#define ALIBABACLOUD_VIDEOENHAN_MODEL_INTERPOLATEVIDEOFRAMEREQUEST_H_

#include <alibabacloud/videoenhan/VideoenhanExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Videoenhan {
namespace Model {
class ALIBABACLOUD_VIDEOENHAN_EXPORT InterpolateVideoFrameRequest : public RpcServiceRequest {
public:
	InterpolateVideoFrameRequest();
	~InterpolateVideoFrameRequest();
	int getFrameRate() const;
	void setFrameRate(int frameRate);
	int getBitrate() const;
	void setBitrate(int bitrate);
	bool getAsync() const;
	void setAsync(bool async);
	std::string getVideoURL() const;
	void setVideoURL(const std::string &videoURL);

private:
	int frameRate_;
	int bitrate_;
	bool async_;
	std::string videoURL_;
};
} // namespace Model
} // namespace Videoenhan
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VIDEOENHAN_MODEL_INTERPOLATEVIDEOFRAMEREQUEST_H_
