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

#ifndef ALIBABACLOUD_CDRS_MODEL_SEARCHOBJECTRESULT_H_
#define ALIBABACLOUD_CDRS_MODEL_SEARCHOBJECTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cdrs/CDRSExport.h>

namespace AlibabaCloud
{
	namespace CDRS
	{
		namespace Model
		{
			class ALIBABACLOUD_CDRS_EXPORT SearchObjectResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct BodyListItem
					{
						std::string objectType;
						std::string targetImageUrl;
						float score;
						int rightBottomX;
						std::string deviceID;
						int rightBottomY;
						std::string shotTime;
						std::string sourceImageUrl;
						int leftTopY;
						int leftTopX;
					};
					struct FaceListItem
					{
						std::string objectType;
						std::string targetImageUrl;
						float score;
						int rightBottomX;
						std::string deviceID;
						int rightBottomY;
						std::string shotTime;
						std::string sourceImageUrl;
						int leftTopY;
						int leftTopX;
					};
					struct MotorListItem
					{
						std::string objectType;
						std::string targetImageUrl;
						float score;
						int rightBottomX;
						std::string deviceID;
						int rightBottomY;
						std::string shotTime;
						std::string sourceImageUrl;
						int leftTopY;
						int leftTopX;
					};
					struct NonMotorListItem
					{
						std::string objectType;
						std::string targetImageUrl;
						int score;
						int rightBottomX;
						std::string deviceID;
						int rightBottomY;
						std::string shotTime;
						std::string sourceImageUrl;
						int leftTopY;
						int leftTopX;
					};
					std::vector<NonMotorListItem> nonMotorList;
					std::vector<BodyListItem> bodyList;
					std::vector<FaceListItem> faceList;
					std::vector<MotorListItem> motorList;
				};


				SearchObjectResult();
				explicit SearchObjectResult(const std::string &payload);
				~SearchObjectResult();
				std::string getMessage()const;
				long getPageSize()const;
				int getTotal()const;
				Data getData()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				long pageSize_;
				int total_;
				Data data_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CDRS_MODEL_SEARCHOBJECTRESULT_H_