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

#ifndef ALIBABACLOUD_WEBSITEBUILD_MODEL_SEARCHIMAGERESULT_H_
#define ALIBABACLOUD_WEBSITEBUILD_MODEL_SEARCHIMAGERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/websitebuild/WebsiteBuildExport.h>

namespace AlibabaCloud
{
	namespace WebsiteBuild
	{
		namespace Model
		{
			class ALIBABACLOUD_WEBSITEBUILD_EXPORT SearchImageResult : public ServiceResult
			{
			public:
				struct ImageResponse
				{
					struct Image
					{
						std::string imageRatio;
						std::string descriptiveTones;
						std::string ossKey;
						std::string imageCategory;
						int height;
						std::string quantitativePalette;
						std::string imageUuid;
						int width;
						std::string url;
						std::string tagsFromImage;
					};
					std::string nextToken;
					int maxResults;
					std::vector<Image> imageList;
				};


				SearchImageResult();
				explicit SearchImageResult(const std::string &payload);
				~SearchImageResult();
				std::string getErrorMsg()const;
				ImageResponse getImageResponse()const;
				std::string getErrorCode()const;
				std::string getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string errorMsg_;
				ImageResponse imageResponse_;
				std::string errorCode_;
				std::string success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_WEBSITEBUILD_MODEL_SEARCHIMAGERESULT_H_