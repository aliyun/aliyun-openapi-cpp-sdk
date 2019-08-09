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

#ifndef ALIBABACLOUD_AEGIS_MODEL_DESCRIBECHARTDATARESULT_H_
#define ALIBABACLOUD_AEGIS_MODEL_DESCRIBECHARTDATARESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/aegis/AegisExport.h>

namespace AlibabaCloud
{
	namespace Aegis
	{
		namespace Model
		{
			class ALIBABACLOUD_AEGIS_EXPORT DescribeChartDataResult : public ServiceResult
			{
			public:
				struct CoordinateData
				{
					struct YAxisDo
					{
						std::string type;
						std::string color;
						std::vector<std::string> value;
						std::string name;
					};
					std::vector<YAxisDo> yAxisList;
					std::vector<std::string> xAxis;
				};
				struct SingleData
				{
					std::string type;
					std::string color;
					long value;
					std::string name;
				};
				struct MultipleDataItem
				{
					std::string type;
					std::string color;
					long value;
					std::string name;
				};


				DescribeChartDataResult();
				explicit DescribeChartDataResult(const std::string &payload);
				~DescribeChartDataResult();
				std::string getChartDataType()const;
				std::vector<MultipleDataItem> getMultipleData()const;
				CoordinateData getCoordinateData()const;
				std::string getChartType()const;
				SingleData getSingleData()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string chartDataType_;
				std::vector<MultipleDataItem> multipleData_;
				CoordinateData coordinateData_;
				std::string chartType_;
				SingleData singleData_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AEGIS_MODEL_DESCRIBECHARTDATARESULT_H_