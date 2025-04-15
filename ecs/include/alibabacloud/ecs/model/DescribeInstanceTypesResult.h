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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBEINSTANCETYPESRESULT_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBEINSTANCETYPESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ecs/EcsExport.h>

namespace AlibabaCloud
{
	namespace Ecs
	{
		namespace Model
		{
			class ALIBABACLOUD_ECS_EXPORT DescribeInstanceTypesResult : public ServiceResult
			{
			public:
				struct InstanceType
				{
					struct EnhancedNetwork
					{
						int vfQueueNumberPerEni;
						bool rssSupport;
						bool sriovSupport;
					};
					struct CpuOptions
					{
						std::vector<std::string> supportedTopologyTypes;
						int coreFactor;
						int threadsPerCore;
						bool hyperThreadingAdjustable;
						int core;
					};
					struct NetworkCardInfo
					{
						int networkCardIndex;
					};
					struct Attribute
					{
						std::string value;
						std::string name;
					};
					long instancePpsTx;
					std::string nvmeSupport;
					int primaryEniQueueNumber;
					long localStorageCapacity;
					int totalEniQueueQuantity;
					bool eniTrunkSupported;
					std::string instanceTypeFamily;
					long instancePpsRx;
					std::vector<InstanceType::Attribute> attributes;
					bool networkEncryptionSupport;
					int eriQuantity;
					int instanceBandwidthRx;
					EnhancedNetwork enhancedNetwork;
					int instanceBandwidthTx;
					int localStorageAmount;
					int secondaryEniQueueNumber;
					std::string physicalProcessorModel;
					std::string localStorageCategory;
					std::string gPUSpec;
					std::string cpuArchitecture;
					std::string instanceTypeId;
					std::vector<std::string> supportedBootModes;
					float memorySize;
					int maximumQueueNumberPerEni;
					int eniIpv6AddressQuantity;
					float gPUMemorySize;
					int eniTotalQuantity;
					int cpuCoreCount;
					CpuOptions cpuOptions;
					int initialCredit;
					int networkCardQuantity;
					std::string instanceCategory;
					int eniQuantity;
					int gPUAmount;
					int diskQuantity;
					float cpuSpeedFrequency;
					int queuePairNumber;
					int baselineCredit;
					std::string instanceFamilyLevel;
					std::vector<InstanceType::NetworkCardInfo> networkCards;
					bool jumboFrameSupport;
					float cpuTurboFrequency;
					int eniPrivateIpAddressQuantity;
				};


				DescribeInstanceTypesResult();
				explicit DescribeInstanceTypesResult(const std::string &payload);
				~DescribeInstanceTypesResult();
				std::string getNextToken()const;
				std::vector<InstanceType> getInstanceTypes()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string nextToken_;
				std::vector<InstanceType> instanceTypes_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBEINSTANCETYPESRESULT_H_