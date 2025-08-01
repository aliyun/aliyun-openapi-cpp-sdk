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

#ifndef ALIBABACLOUD_WEBSITEBUILD_MODEL_SEARCHIMAGEREQUEST_H_
#define ALIBABACLOUD_WEBSITEBUILD_MODEL_SEARCHIMAGEREQUEST_H_

#include <alibabacloud/websitebuild/WebsiteBuildExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace WebsiteBuild {
namespace Model {
class ALIBABACLOUD_WEBSITEBUILD_EXPORT SearchImageRequest : public RpcServiceRequest {
public:
	SearchImageRequest();
	~SearchImageRequest();
	bool getHasPerson() const;
	void setHasPerson(bool hasPerson);
	int getMaxWidth() const;
	void setMaxWidth(int maxWidth);
	std::string getOssKey() const;
	void setOssKey(const std::string &ossKey);
	std::string getImageCategory() const;
	void setImageCategory(const std::string &imageCategory);
	int getMaxHeight() const;
	void setMaxHeight(int maxHeight);
	std::string getImageRatio() const;
	void setImageRatio(const std::string &imageRatio);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::string getText() const;
	void setText(const std::string &text);
	std::string getColorHex() const;
	void setColorHex(const std::string &colorHex);
	int getMinHeight() const;
	void setMinHeight(int minHeight);
	int getStart() const;
	void setStart(int start);
	std::vector<std::string> getTags() const;
	void setTags(const std::vector<std::string> &tags);
	int getSize() const;
	void setSize(int size);
	int getMinWidth() const;
	void setMinWidth(int minWidth);
	int getMaxResults() const;
	void setMaxResults(int maxResults);

private:
	bool hasPerson_;
	int maxWidth_;
	std::string ossKey_;
	std::string imageCategory_;
	int maxHeight_;
	std::string imageRatio_;
	std::string nextToken_;
	std::string text_;
	std::string colorHex_;
	int minHeight_;
	int start_;
	std::vector<std::string> tags_;
	int size_;
	int minWidth_;
	int maxResults_;
};
} // namespace Model
} // namespace WebsiteBuild
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_WEBSITEBUILD_MODEL_SEARCHIMAGEREQUEST_H_
