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

#ifndef ALIBABACLOUD_VIDEOENHAN_MODEL_MERGEVIDEOMODELFACEREQUEST_H_
#define ALIBABACLOUD_VIDEOENHAN_MODEL_MERGEVIDEOMODELFACEREQUEST_H_

#include <alibabacloud/videoenhan/VideoenhanExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Videoenhan {
namespace Model {
class ALIBABACLOUD_VIDEOENHAN_EXPORT MergeVideoModelFaceRequest : public RpcServiceRequest {
public:
	struct MergeInfos {
		std::string templateFaceURL;
		std::string imageURL;
		std::string templateFaceID;
	};
	MergeVideoModelFaceRequest();
	~MergeVideoModelFaceRequest();
	std::string getFaceImageURL() const;
	void setFaceImageURL(const std::string &faceImageURL);
	std::vector<MergeInfos> getMergeInfos() const;
	void setMergeInfos(const std::vector<MergeInfos> &mergeInfos);
	std::string getUserId() const;
	void setUserId(const std::string &userId);
	std::string getWatermarkType() const;
	void setWatermarkType(const std::string &watermarkType);
	bool getEnhance() const;
	void setEnhance(bool enhance);
	std::string getTemplateId() const;
	void setTemplateId(const std::string &templateId);
	std::string getAsync() const;
	void setAsync(const std::string &async);
	bool getAddWatermark() const;
	void setAddWatermark(bool addWatermark);

private:
	std::string faceImageURL_;
	std::vector<MergeInfos> mergeInfos_;
	std::string userId_;
	std::string watermarkType_;
	bool enhance_;
	std::string templateId_;
	std::string async_;
	bool addWatermark_;
};
} // namespace Model
} // namespace Videoenhan
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VIDEOENHAN_MODEL_MERGEVIDEOMODELFACEREQUEST_H_
