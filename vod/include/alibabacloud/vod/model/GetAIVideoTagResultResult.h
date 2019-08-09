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

#ifndef ALIBABACLOUD_VOD_MODEL_GETAIVIDEOTAGRESULTRESULT_H_
#define ALIBABACLOUD_VOD_MODEL_GETAIVIDEOTAGRESULTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/vod/VodExport.h>

namespace AlibabaCloud
{
	namespace Vod
	{
		namespace Model
		{
			class ALIBABACLOUD_VOD_EXPORT GetAIVideoTagResultResult : public ServiceResult
			{
			public:
				struct VideoTagResult
				{
					struct CategoryItem
					{
						std::string tag;
					};
					struct PersonItem
					{
						std::vector<std::string> times;
						std::string tag;
						std::string faceUrl;
					};
					struct TimeItem
					{
						std::vector<std::string> times1;
						std::string tag;
					};
					struct LocationItem
					{
						std::string tag;
						std::vector<std::string> times2;
					};
					struct KeywordItem
					{
						std::string tag;
						std::vector<std::string> times3;
					};
					std::vector<CategoryItem> category;
					std::vector<KeywordItem> keyword;
					std::vector<TimeItem> time;
					std::vector<PersonItem> person;
					std::vector<LocationItem> location;
				};


				GetAIVideoTagResultResult();
				explicit GetAIVideoTagResultResult(const std::string &payload);
				~GetAIVideoTagResultResult();
				VideoTagResult getVideoTagResult()const;

			protected:
				void parse(const std::string &payload);
			private:
				VideoTagResult videoTagResult_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOD_MODEL_GETAIVIDEOTAGRESULTRESULT_H_