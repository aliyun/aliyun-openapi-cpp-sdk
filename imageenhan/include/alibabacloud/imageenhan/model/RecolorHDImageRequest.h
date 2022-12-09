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

#ifndef ALIBABACLOUD_IMAGEENHAN_MODEL_RECOLORHDIMAGEREQUEST_H_
#define ALIBABACLOUD_IMAGEENHAN_MODEL_RECOLORHDIMAGEREQUEST_H_

#include <alibabacloud/imageenhan/ImageenhanExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Imageenhan {
namespace Model {
class ALIBABACLOUD_IMAGEENHAN_EXPORT RecolorHDImageRequest : public RpcServiceRequest {
public:
	struct ColorTemplate {
		std::string color;
	};
	RecolorHDImageRequest();
	~RecolorHDImageRequest();
	std::string getMode() const;
	void setMode(const std::string &mode);
	int getColorCount() const;
	void setColorCount(int colorCount);
	std::vector<ColorTemplate> getColorTemplate() const;
	void setColorTemplate(const std::vector<ColorTemplate> &colorTemplate);
	std::string getDegree() const;
	void setDegree(const std::string &degree);
	std::string getUrl() const;
	void setUrl(const std::string &url);
	bool getAsync() const;
	void setAsync(bool async);
	std::string getRefUrl() const;
	void setRefUrl(const std::string &refUrl);

private:
	std::string mode_;
	int colorCount_;
	std::vector<ColorTemplate> colorTemplate_;
	std::string degree_;
	std::string url_;
	bool async_;
	std::string refUrl_;
};
} // namespace Model
} // namespace Imageenhan
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_IMAGEENHAN_MODEL_RECOLORHDIMAGEREQUEST_H_
