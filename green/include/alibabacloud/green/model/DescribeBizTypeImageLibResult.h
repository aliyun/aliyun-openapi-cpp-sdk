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

#ifndef ALIBABACLOUD_GREEN_MODEL_DESCRIBEBIZTYPEIMAGELIBRESULT_H_
#define ALIBABACLOUD_GREEN_MODEL_DESCRIBEBIZTYPEIMAGELIBRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/green/GreenExport.h>

namespace AlibabaCloud
{
	namespace Green
	{
		namespace Model
		{
			class ALIBABACLOUD_GREEN_EXPORT DescribeBizTypeImageLibResult : public ServiceResult
			{
			public:
				struct Black
				{
					struct WhiteSelectedItem
					{
						std::string code;
						std::string name;
					};
					struct WhiteAllItem
					{
						std::string code;
						std::string name;
					};
					std::vector<WhiteAllItem> all;
					std::vector<WhiteSelectedItem> selected;
				};
				struct Review
				{
					struct WhiteSelectedItem3
					{
						std::string code;
						std::string name;
					};
					struct WhiteAllItem4
					{
						std::string code;
						std::string name;
					};
					std::vector<WhiteSelectedItem3> selected1;
					std::vector<WhiteAllItem4> all2;
				};
				struct White
				{
					struct WhiteSelectedItem7
					{
						std::string code;
						std::string name;
					};
					struct WhiteAllItem8
					{
						std::string code;
						std::string name;
					};
					std::vector<WhiteSelectedItem7> selected5;
					std::vector<WhiteAllItem8> all6;
				};


				DescribeBizTypeImageLibResult();
				explicit DescribeBizTypeImageLibResult(const std::string &payload);
				~DescribeBizTypeImageLibResult();
				White getWhite()const;
				Black getBlack()const;
				Review getReview()const;

			protected:
				void parse(const std::string &payload);
			private:
				White white_;
				Black black_;
				Review review_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GREEN_MODEL_DESCRIBEBIZTYPEIMAGELIBRESULT_H_