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

#ifndef ALIBABACLOUD_REID_MODEL_LISTACTIONDATARESULT_H_
#define ALIBABACLOUD_REID_MODEL_LISTACTIONDATARESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/reid/ReidExport.h>

namespace AlibabaCloud
{
	namespace Reid
	{
		namespace Model
		{
			class ALIBABACLOUD_REID_EXPORT ListActionDataResult : public ServiceResult
			{
			public:
				struct Action
				{
					struct ObjectPositionInImage
					{
						float left;
						float top;
						float right;
						float bottom;
					};
					struct PointInMap
					{
						float x;
						float y;
					};
					int status;
					int facePointNumber;
					int bodyPointNumber;
					int stayPeriod;
					long leaveTimestamp;
					long gmtModified;
					long locationId;
					std::string imageUrl;
					std::string gender;
					ObjectPositionInImage objectPositionInImage;
					std::string imageType;
					long arriveTimestamp;
					long gmtCreate;
					float score;
					long storeId;
					PointInMap pointInMap;
					std::string locationLayerType;
					std::string imageObjectKey;
					long ukId;
					long inStay;
					std::string specialType;
					bool stayValid;
					long id;
					int age;
				};


				ListActionDataResult();
				explicit ListActionDataResult(const std::string &payload);
				~ListActionDataResult();
				long getTotalCount()const;
				int getPageSize()const;
				std::vector<Action> getActions()const;
				int getPageNumber()const;
				long getCursorTime()const;
				std::string getErrorCode()const;
				std::string getErrorMessage()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalCount_;
				int pageSize_;
				std::vector<Action> actions_;
				int pageNumber_;
				long cursorTime_;
				std::string errorCode_;
				std::string errorMessage_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_REID_MODEL_LISTACTIONDATARESULT_H_