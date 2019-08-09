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

#ifndef ALIBABACLOUD_LINKFACE_MODEL_SEARCHFACERESULT_H_
#define ALIBABACLOUD_LINKFACE_MODEL_SEARCHFACERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/linkface/LinkFaceExport.h>

namespace AlibabaCloud
{
	namespace LinkFace
	{
		namespace Model
		{
			class ALIBABACLOUD_LINKFACE_EXPORT SearchFaceResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct TopUserItemItem
					{
						float score;
						std::string userId;
					};
					std::vector<TopUserItemItem> topUserItem;
				};


				SearchFaceResult();
				explicit SearchFaceResult(const std::string &payload);
				~SearchFaceResult();
				std::string getMessage()const;
				Data getData()const;
				int getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				Data data_;
				int code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LINKFACE_MODEL_SEARCHFACERESULT_H_