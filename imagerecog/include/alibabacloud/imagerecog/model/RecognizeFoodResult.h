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

#ifndef ALIBABACLOUD_IMAGERECOG_MODEL_RECOGNIZEFOODRESULT_H_
#define ALIBABACLOUD_IMAGERECOG_MODEL_RECOGNIZEFOODRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/imagerecog/ImagerecogExport.h>

namespace AlibabaCloud
{
	namespace Imagerecog
	{
		namespace Model
		{
			class ALIBABACLOUD_IMAGERECOG_EXPORT RecognizeFoodResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct TopFivesItem
					{
						std::string calorie;
						float score;
						std::string category;
					};
					std::vector<TopFivesItem> topFives;
				};


				RecognizeFoodResult();
				explicit RecognizeFoodResult(const std::string &payload);
				~RecognizeFoodResult();
				std::string getMessage()const;
				Data getData()const;
				std::string getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				Data data_;
				std::string code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IMAGERECOG_MODEL_RECOGNIZEFOODRESULT_H_