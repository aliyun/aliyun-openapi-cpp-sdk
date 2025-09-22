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

#ifndef ALIBABACLOUD_ANYTRANS_MODEL_GETIMAGETRANSLATETASKRESULT_H_
#define ALIBABACLOUD_ANYTRANS_MODEL_GETIMAGETRANSLATETASKRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/anytrans/AnyTransExport.h>

namespace AlibabaCloud
{
	namespace AnyTrans
	{
		namespace Model
		{
			class ALIBABACLOUD_ANYTRANS_EXPORT GetImageTranslateTaskResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct Translation
					{
						struct BoundingBoxesItem
						{
							struct UpLeft
							{
								long x;
								long y;
							};
							struct UpRight
							{
								long x;
								long y;
							};
							struct DownLeft
							{
								long x;
								long y;
							};
							struct DownRight
							{
								long x;
								long y;
							};
							long tableId;
							long tableCellId;
							std::string translation;
							UpRight upRight;
							DownRight downRight;
							float confidence;
							UpLeft upLeft;
							std::string text;
							long direction;
							DownLeft downLeft;
						};
						struct TableInfosItem
						{
							struct CellInfosItem
							{
								struct PosItem
								{
									long x;
									long y;
								};
								long tableCellId;
								std::vector<CellInfosItem::PosItem> pos;
								long yec;
								long xec;
								long ysc;
								long xsc;
								std::string text;
							};
							long tableId;
							std::vector<TableInfosItem::CellInfosItem> cellInfos;
							long xCellSize;
							long yCellSize;
						};
						long orgWidth;
						std::vector<BoundingBoxesItem> boundingBoxes;
						long angle;
						long orgHeight;
						long boxesCount;
						long height;
						std::vector<TableInfosItem> tableInfos;
						long width;
					};
					Translation translation;
					std::string traceId;
				};


				GetImageTranslateTaskResult();
				explicit GetImageTranslateTaskResult(const std::string &payload);
				~GetImageTranslateTaskResult();
				std::string getMessage()const;
				std::string getRequestId()const;
				bool getSynchro()const;
				std::string getHttpStatusCode()const;
				Data getData()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				std::string requestId_;
				bool synchro_;
				std::string httpStatusCode_;
				Data data_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ANYTRANS_MODEL_GETIMAGETRANSLATETASKRESULT_H_