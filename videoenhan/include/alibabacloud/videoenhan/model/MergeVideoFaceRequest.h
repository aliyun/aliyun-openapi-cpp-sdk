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

#ifndef ALIBABACLOUD_VIDEOENHAN_MODEL_MERGEVIDEOFACEREQUEST_H_
#define ALIBABACLOUD_VIDEOENHAN_MODEL_MERGEVIDEOFACEREQUEST_H_

#include <alibabacloud/videoenhan/VideoenhanExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Videoenhan {
namespace Model {
class ALIBABACLOUD_VIDEOENHAN_EXPORT MergeVideoFaceRequest : public RpcServiceRequest {
public:
	MergeVideoFaceRequest();
	~MergeVideoFaceRequest();
	std::string getReferenceURL() const;
	void setReferenceURL(const std::string &referenceURL);
	std::string getWatermarkType() const;
	void setWatermarkType(const std::string &watermarkType);
	bool getEnhance() const;
	void setEnhance(bool enhance);
	std::string getPostURL() const;
	void setPostURL(const std::string &postURL);
	bool getAsync() const;
	void setAsync(bool async);
	std::string getVideoURL() const;
	void setVideoURL(const std::string &videoURL);
	bool getAddWatermark() const;
	void setAddWatermark(bool addWatermark);

private:
	std::string referenceURL_;
	std::string watermarkType_;
	bool enhance_;
	std::string postURL_;
	bool async_;
	std::string videoURL_;
	bool addWatermark_;
};
} // namespace Model
} // namespace Videoenhan
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VIDEOENHAN_MODEL_MERGEVIDEOFACEREQUEST_H_
