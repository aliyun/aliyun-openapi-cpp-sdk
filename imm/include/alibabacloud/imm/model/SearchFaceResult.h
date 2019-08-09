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

#ifndef ALIBABACLOUD_IMM_MODEL_SEARCHFACERESULT_H_
#define ALIBABACLOUD_IMM_MODEL_SEARCHFACERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/imm/ImmExport.h>

namespace AlibabaCloud
{
	namespace Imm
	{
		namespace Model
		{
			class ALIBABACLOUD_IMM_EXPORT SearchFaceResult : public ServiceResult
			{
			public:
				struct ResultFacesItem
				{
					float score;
					std::string user;
					std::string imageId;
					int glasses;
					int hat;
					std::string imageUri;
					std::vector<std::string> axis1;
					std::string groupId;
				};


				SearchFaceResult();
				explicit SearchFaceResult(const std::string &payload);
				~SearchFaceResult();
				std::string getGroupName()const;
				float getScore()const;
				std::vector<ResultFacesItem> getResultFaces()const;
				int getGlasses()const;
				int getHat()const;
				std::string getImageUri()const;
				std::vector<std::string> getAxis()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string groupName_;
				float score_;
				std::vector<ResultFacesItem> resultFaces_;
				int glasses_;
				int hat_;
				std::string imageUri_;
				std::vector<std::string> axis_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IMM_MODEL_SEARCHFACERESULT_H_